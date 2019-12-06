# Шаблоны для doxygen
В данном файле хранятся шаблоны для вставки комментариев для системы doxygen.
Даже если система doxygen не используется для генерации документации, полезно
тем не менее оформлять комментарии единообразно.
Почитай https://habr.com/ru/post/252101/.

## Шапка файла
/*
  \brief Source file for Gyroscope class
  \author rahmaevao
  \version 0.1
  \date June 2018
*/

## Коментарий к методу
/*!
	\brief		Update the eulerAngle field
  \note		The method only parse the receiveBufer_ buffer,
				  which should be updated by UART
  \param[out]	dest Целевая область памяти
  \param[in]	src Исходная область памяти
  \retval		GyroscopeStatus
*/

## Документирование перечислений
 /// Набор возможных состояний объекта
 enum States {
          Disabled, ///< Указывает, что элемент недоступен для использования
          Undefined, ///< Указывает, что состояние элемента неопределенно
          Enabled, ///< Указывает, что элемент доступен для использования
 }


## Документирование класса
/*!
	\brief Дочерний класс
	\author Norserium
	\version 1.0
	\date Март 2015 года
	\warning Данный класс создан только в учебных целях

	Обычный дочерний класс, который отнаследован от ранее созданного класса Parent
*/
