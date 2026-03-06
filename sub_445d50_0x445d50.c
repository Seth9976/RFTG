// 函数名称: sub_445d50
// 虚拟地址: 0x445d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_445d50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax
    
    if (sub_419400(&var_8).b != 0)
        eax = *arg4
        
        if (eax == 5)
            eax.b = *(*(data_27e7a40 + 0x548) + 0x438b5) == 0
            return eax
        
        if (eax == 0x17)
            void* eax_1
            eax_1.b = *(*(data_27e7a40 + 0x548) + 0x438b6) == 0
            return eax_1
    
    eax.b = 0
    return eax
}
