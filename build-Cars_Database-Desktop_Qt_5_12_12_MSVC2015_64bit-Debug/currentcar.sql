-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Апр 17 2022 г., 10:59
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
-- Структура таблицы `currentcar`
--

CREATE TABLE `currentcar` (
  `CC_ID` int NOT NULL,
  `CAR_ID` int NOT NULL,
  `BRAND` varchar(99) NOT NULL,
  `MODEL` varchar(99) NOT NULL,
  `CC_MODEL_YEAR` int NOT NULL,
  `FIRST_MODEL_YEAR` int NOT NULL,
  `BODY_TYPE` varchar(99) NOT NULL,
  `BODY_COLOR` varchar(99) NOT NULL,
  `MILEAGE` int NOT NULL,
  `DOORS` int NOT NULL,
  `ENGINE_POWER` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Дамп данных таблицы `currentcar`
--

INSERT INTO `currentcar` (`CC_ID`, `CAR_ID`, `BRAND`, `MODEL`, `CC_MODEL_YEAR`, `FIRST_MODEL_YEAR`, `BODY_TYPE`, `BODY_COLOR`, `MILEAGE`, `DOORS`, `ENGINE_POWER`) VALUES
(0, 0, 'Tesla', 'Model S', 2018, 2012, 'Sedan', 'White', 11000, 5, 560),
(1, 0, 'Tesla', 'Model S', 2021, 2012, 'Sedan', 'Black', 33333, 5, 580),
(2, 1, 'Hummer', 'H3', 2009, 2005, 'Jeep', 'Yellow', 160000, 5, 240),
(3, 1, 'Hummer', 'H3', 2006, 2005, 'Jeep', 'Green', 190000, 5, 250),
(4, 2, 'BMW', 'X3', 2005, 1999, 'Jeep', 'Grey', 240000, 5, 220),
(5, 2, 'BMW', 'X3', 2009, 1999, 'Jeep', 'Grey', 200000, 5, 280),
(6, 3, 'Volvo', 'XC70', 2004, 1996, 'Universal', 'Brown', 290000, 5, 120),
(7, 3, 'Volvo', 'XC70', 2014, 1996, 'Universal', 'Red', 180000, 5, 160),
(8, 4, 'Lada', 'Vesta', 2022, 2018, 'Sedan', 'White', 39000, 5, 90),
(9, 4, 'Lada', 'Vesta', 2019, 2018, 'Sedan', 'Black', 99000, 5, 110);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
