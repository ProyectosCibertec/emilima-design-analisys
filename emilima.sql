-- MySQL Script generated by MySQL Workbench
-- Sun Oct  2 17:53:29 2022
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema emilima
-- -----------------------------------------------------
DROP SCHEMA IF EXISTS `emilima` ;

-- -----------------------------------------------------
-- Schema emilima
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `emilima` DEFAULT CHARACTER SET utf8 ;
USE `emilima` ;

-- -----------------------------------------------------
-- Table `emilima`.`usuario`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`usuario` ;

CREATE TABLE IF NOT EXISTS `emilima`.`usuario` (
  `id` INT NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`user_role`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`user_role` ;

CREATE TABLE IF NOT EXISTS `emilima`.`user_role` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(45) NOT NULL,
  `description` TEXT NULL,
  PRIMARY KEY (`id`),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`file`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`file` ;

CREATE TABLE IF NOT EXISTS `emilima`.`file` (
  `id` VARCHAR(48) NOT NULL,
  `filename` TEXT NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`organic_unit`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`organic_unit` ;

CREATE TABLE IF NOT EXISTS `emilima`.`organic_unit` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(80) NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`hierarchical_dependency`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`hierarchical_dependency` ;

CREATE TABLE IF NOT EXISTS `emilima`.`hierarchical_dependency` (
  `id` INT NOT NULL,
  `name` VARCHAR(200) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`user_position`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`user_position` ;

CREATE TABLE IF NOT EXISTS `emilima`.`user_position` (
  `id` INT NOT NULL,
  `name` VARCHAR(200) NOT NULL,
  `organic_unit_id` INT NOT NULL,
  `hierarchical_dependency_id` INT NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC),
  INDEX `fk_user_position_organic_unit_idx` (`organic_unit_id` ASC),
  INDEX `fk_user_position_hierarchical_dependency_idx` (`hierarchical_dependency_id` ASC),
  CONSTRAINT `fk_user_position_organic_unit`
    FOREIGN KEY (`organic_unit_id`)
    REFERENCES `emilima`.`organic_unit` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_user_position_hierarchical_dependency`
    FOREIGN KEY (`hierarchical_dependency_id`)
    REFERENCES `emilima`.`hierarchical_dependency` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`user`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`user` ;

CREATE TABLE IF NOT EXISTS `emilima`.`user` (
  `username` VARCHAR(45) NOT NULL,
  `password` VARCHAR(45) NOT NULL,
  `email` VARCHAR(100) NOT NULL,
  `role_id` INT NOT NULL,
  `photo_id` VARCHAR(48) NOT NULL DEFAULT 'c4042c2a-f106-11ec-8ea0-0242ac120002',
  `position_id` INT NOT NULL,
  PRIMARY KEY (`username`),
  INDEX `role_idx` (`role_id` ASC),
  INDEX `photo_idx` (`photo_id` ASC),
  INDEX `fk_user_user_position_idx` (`position_id` ASC),
  CONSTRAINT `fk_user_user_role`
    FOREIGN KEY (`role_id`)
    REFERENCES `emilima`.`user_role` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_user_file`
    FOREIGN KEY (`photo_id`)
    REFERENCES `emilima`.`file` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_user_user_position`
    FOREIGN KEY (`position_id`)
    REFERENCES `emilima`.`user_position` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`document_type`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`document_type` ;

CREATE TABLE IF NOT EXISTS `emilima`.`document_type` (
  `id` INT NOT NULL,
  `name` VARCHAR(80) NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`documental_serie`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`documental_serie` ;

CREATE TABLE IF NOT EXISTS `emilima`.`documental_serie` (
  `code` CHAR(6) NOT NULL,
  `name` VARCHAR(200) NOT NULL,
  `hierarchical_dependency_id` INT NOT NULL,
  `organic_unit_id` INT NOT NULL,
  `definition` TEXT NOT NULL,
  `service_frequency` VARCHAR(45) NOT NULL,
  `normative_scope` TEXT NOT NULL,
  `is_public` BIT(1) NULL DEFAULT 1,
  `phisical_features` VARCHAR(45) NULL DEFAULT 'ND',
  `documental_serie_value` CHAR(1) NOT NULL,
  `years_in_management_archive` INT NOT NULL,
  `years_in_central_archive` INT NOT NULL,
  `elaboration_date` DATETIME NOT NULL,
  PRIMARY KEY (`code`),
  INDEX `fk_documental_serie_hierarchical_dependency_idx` (`hierarchical_dependency_id` ASC),
  INDEX `fk_documental_serie_organic_unit_idx` (`organic_unit_id` ASC),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC),
  CONSTRAINT `fk_documental_serie_hierarchical_dependency`
    FOREIGN KEY (`hierarchical_dependency_id`)
    REFERENCES `emilima`.`hierarchical_dependency` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_documental_serie_organic_unit`
    FOREIGN KEY (`organic_unit_id`)
    REFERENCES `emilima`.`organic_unit` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`document`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`document` ;

CREATE TABLE IF NOT EXISTS `emilima`.`document` (
  `serial_number` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(45) NOT NULL,
  `description` TEXT NULL,
  `upload_date` DATETIME NULL DEFAULT NOW(),
  `creation_date` DATETIME NULL DEFAULT NOW(),
  `file_id` VARCHAR(48) NOT NULL,
  `document_type_id` INT NOT NULL,
  `documental_serie_id` CHAR(6) NOT NULL,
  PRIMARY KEY (`serial_number`),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC),
  INDEX `fk_documentation_file1_idx` (`file_id` ASC),
  INDEX `fk_documentation_documentation_type_idx` (`document_type_id` ASC),
  INDEX `fk_documentation_documental_serie_idx` (`documental_serie_id` ASC),
  CONSTRAINT `fk_documentation_file`
    FOREIGN KEY (`file_id`)
    REFERENCES `emilima`.`file` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_documentation_documentation_type`
    FOREIGN KEY (`document_type_id`)
    REFERENCES `emilima`.`document_type` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_documentation_documental_serie`
    FOREIGN KEY (`documental_serie_id`)
    REFERENCES `emilima`.`documental_serie` (`code`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`request_state`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`request_state` ;

CREATE TABLE IF NOT EXISTS `emilima`.`request_state` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE INDEX `name_UNIQUE` (`name` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `emilima`.`document_request`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `emilima`.`document_request` ;

CREATE TABLE IF NOT EXISTS `emilima`.`document_request` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(45) NOT NULL,
  `description` TEXT NOT NULL,
  `creation_date` DATETIME NULL DEFAULT NOW(),
  `state_id` INT NOT NULL,
  `user_id` VARCHAR(45) NOT NULL,
  `organic_unit_id` INT NOT NULL,
  PRIMARY KEY (`id`),
  INDEX `user_id_idx` (`user_id` ASC),
  INDEX `fk_request_request_state_idx` (`state_id` ASC) VISIBLE,
  INDEX `fk_request_organic_unit_idx` (`organic_unit_id` ASC) VISIBLE,
  CONSTRAINT `fk_request_user`
    FOREIGN KEY (`user_id`)
    REFERENCES `emilima`.`user` (`username`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_request_request_state`
    FOREIGN KEY (`state_id`)
    REFERENCES `emilima`.`request_state` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_request_organic_unit`
    FOREIGN KEY (`organic_unit_id`)
    REFERENCES `emilima`.`organic_unit` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
