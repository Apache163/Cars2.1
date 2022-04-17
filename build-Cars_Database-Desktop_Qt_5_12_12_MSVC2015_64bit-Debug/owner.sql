-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Апр 17 2022 г., 11:10
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
-- Структура таблицы `owner`
--

CREATE TABLE `owner` (
  `OwnerId` int NOT NULL,
  `FullName` varchar(99) NOT NULL,
  `Email` varchar(99) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Дамп данных таблицы `owner`
--

INSERT INTO `owner` (`OwnerId`, `FullName`, `Email`) VALUES
(0, 'Ivanov Ivan Ivanovich', 'ivanov@mail.ru'),
(1, 'Petrov Petr Petrovich', 'petrovich@yandex.ru'),
(2, 'Sergeev Sergey Sergeevich', 'sss@rambler.ru'),
(3, 'Alekseev Aleksey Alekseevich', 'AlexAA@gmail.com'),
(4, 'Alexandrov Alexandr Alexandrovich', 'aaa@mail.ru'),
(5, 'Kirillov Kirill Kirillovich', 'kirill@ya.ru'),
(6, 'Evgeniev Evgeniy Evgenievich', 'eee@gmail.com');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
