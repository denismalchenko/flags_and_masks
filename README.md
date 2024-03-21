<h1>Библиотека flags.h</h1>

Эта библиотека позволяет реализовывать операции записи, чтения и изменения нескольких флагов состояния, хранимых в одной целочисленной переменной. 
Реализованы операции как с одним отдельным флагом, так и с несколькими флагами одновременно по маске.

<h2>Содержание</h2>

1. [Введение](#part-i)
2. [Соглашение](#part-ii)
3. [Описание](#part-iii)
   
   3.1. [Операции с одним флагом](#part-v)
   
   3.2. [Создание маски](#part-vv)
   
   3.3. [Операции по маске](#part-vvv)

<h2 id="part-i">Введение</h2>

Флаг состояния

<h2 id="part-ii">Соглашение</h2>

Используйте целочисленные переменные

<h2 id="part-iii">Описание</h2>

<h3 id="part-v">Операции с одним флагом</h3>
GET_BIT(flags, n)
GET_BIT_BOOL(flags, n)
SET_BIT(flags, n)
CLEAR_BIT(flags, n)
TOGGLE_BIT(flags, n)

<h3 id="part-vv">Создание маски</h3>
MASK_FROM_BITS(...)
MERGE_MASKS(...)
CROSS_MASKS(...)
INVERSE_FLAGS(flags)

<h3 id="part-vvv">Операции по маске</h3>
GET_BITMASK_OR(flags, mask)
GET_BITMASK_OR_BOOL(flags, mask)
GET_BITMASK_AND(flags, mask)
SET_BITMASK(flags, mask)
CLEAR_BITMASK(flags, mask)
TOGGLE_BITMASK(flags, mask)
