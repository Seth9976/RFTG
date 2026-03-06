// 函数名称: sub_5795c0
// 虚拟地址: 0x5795c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5795c0()
{
    // 第一条实际指令: data_27bc448 = 1
    data_27bc448 = 1
    data_27bc44c = 2
    int32_t var_c
    sub_4c6230(&var_c)
    int32_t eax = var_c
    data_27bc450 = eax
    int32_t var_8
    data_27bc454 = var_8
    data_27bc460 = 0
    data_27bc458 = eax
    data_27bc45c = var_8
    sub_4c6230(&var_c)
    int32_t var_20 = var_8
    int32_t var_24 = var_c
    data_27bc464 = sub_578970()
    void var_14
    int32_t* eax_3 = sub_579150(&var_14, 1)
    int32_t* esi = data_273ac20
    data_27bc46c = *eax_3
    data_27bc470 = eax_3[1]
    data_27bc474 = eax_3[2]
    data_27bc478 = eax_3[3]
    data_27bc468 = 1
    void* result = sub_4f4890(esi)
    data_27bc48c = *(result + 8)
    data_27bc490 = *(result + 0xc)
    data_27bc494 = *(result + 0x10)
    data_27bc498 = *(result + 0x14)
    return result
}
