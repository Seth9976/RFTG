// 函数名称: sub_681650
// 虚拟地址: 0x681650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_681650(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1c4)
    void* esi = *(arg1 + 0x1c4)
    *(esi + 0x10) = (**(arg1 + 4))(arg1, 1, 0x400)
    *(esi + 0x14) = (**(arg1 + 4))(arg1, 1, 0x400)
    *(esi + 0x18) = (**(arg1 + 4))(arg1, 1, 0x400)
    *(esi + 0x1c) = (**(arg1 + 4))(arg1, 1, 0x400)
    int32_t* result = nullptr
    int32_t var_c = 0x5b6900
    int32_t var_8 = 0xff1daf00
    int32_t edx_2 = 0xff4d0b80
    
    for (int32_t i = 0x2c8d00; i s>= 0xffd4cb1a; )
        *(result + *(esi + 0x10)) = edx_2 s>> 0x10
        int32_t edi_3 = var_8
        var_8 += 0x1c5a2
        *(result + *(esi + 0x14)) = edi_3 s>> 0x10
        *(result + *(esi + 0x18)) = var_c
        *(result + *(esi + 0x1c)) = i
        i -= 0x581a
        edx_2 += 0x166e9
        result = &result[1]
        var_c -= 0xb6d2
    
    return result
}
