// 函数名称: sub_601c60
// 虚拟地址: 0x601c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601c60(void* arg1 @ esi)
{
    // 第一条实际指令: int16_t var_44[0x20]
    int16_t var_44[0x20]
    var_44[0] = 0
    
    if (*(arg1 + 0x78) == 0)
        sub_5cd1f0(&var_44, arg1 + 0x38, 0x20)
    else
        int32_t edi_1 = *(arg1 + 0x98)
        
        if (sub_5cd1d0(arg1 + 0x38) u< edi_1)
            edi_1 = sub_5cd1d0(arg1 + 0x38)
        
        sub_5cd1f0(&var_44, arg1 + 0x38, edi_1 + 1)
        sub_5cd230(&var_44, arg1 + 0x78, 0x20)
        sub_5cd230(&var_44, arg1 + (edi_1 << 1) + 0x38, 0x20)
    
    int32_t var_50_4 = sub_5cd1d0(&var_44) * 2 + 2
    int16_t (* var_54_2)[0x20] = &var_44
    char* eax_6 = sub_5dd160("UTF-8", "UTF-16LE")
    sub_5d0fc0(eax_6, sub_5cd1d0(arg1 + 0x78) + *(arg1 + 0x98), 0)
    char* var_58_2 = eax_6
    return sub_5d0af0()
}
