-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Мар 30 2022 г., 14:26
-- Версия сервера: 8.0.24
-- Версия PHP: 7.1.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `cars`
--

-- --------------------------------------------------------

--
-- Структура таблицы `aboutcar`
--

CREATE TABLE `aboutcar` (
  `CarId` int NOT NULL,
  `Brand` varchar(99) NOT NULL,
  `Model` varchar(99) NOT NULL,
  `ModelYear` varchar(10) NOT NULL,
  `FirstModelYear` varchar(10) NOT NULL,
  `BodyType` varchar(99) NOT NULL,
  `Doors` varchar(10) NOT NULL,
  `EnginePower` varchar(10000) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Дамп данных таблицы `aboutcar`
--

INSERT INTO `aboutcar` (`CarId`, `Brand`, `Model`, `ModelYear`, `FirstModelYear`, `BodyType`, `Doors`, `EnginePower`) VALUES
(0, 'Tesla', 'Model S', '2015', '2012', 'Sedan', '5', '560'),
(1, 'Hummer', 'H3', '2005', '2008', 'Jeep', '5', '240'),
(2, 'BMW', 'X3', '2003', '1999', 'Jeep', '5', '220'),
(3, 'Volvo', 'XC70', '1996', '2004', 'Universal', '5', '126'),
(4, 'Lada', 'Vesta', '2019', '2018', 'Sedan', '5', '90');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
