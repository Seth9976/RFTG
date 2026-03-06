// 函数名称: sub_43cce0
// 虚拟地址: 0x43cce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_43cce0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (sub_419400(&var_8) != 0)
        int32_t eax_1 = *var_8
        
        if (eax_1 == 0x49 || eax_1 == 0x4a)
            sub_419340()
    
    void* eax_2 = *(data_27e7a40 + 0x548)
    int32_t ecx_1
    ecx_1.b = *(eax_2 + 0xbfb0) != 1
    *(eax_2 + 0xbfb0) = ecx_1 * 2 - 1
    return 0
}
