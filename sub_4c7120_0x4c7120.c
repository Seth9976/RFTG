// 函数名称: sub_4c7120
// 虚拟地址: 0x4c7120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c7120(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_18
    int32_t result = (*(*data_27e7bb4 + 0x24))(*(arg1 + 4), &var_18)
    
    for (int32_t i = result; i != 0; i = result)
        if (data_27e7bb8 == 0)
            sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0x133, "NetLocAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int128_t* eax_4 = sub_4c91b0()
        eax_4[1].d = 0xffffffff
        *eax_4 = var_18
        int32_t var_14
        *(eax_4 + 4) = var_14
        int32_t var_10
        *(eax_4 + 8) = var_10
        eax_4[1].d = i
        int32_t var_c
        *(eax_4 + 0xc) = var_c
        *(eax_4 + 0x28) = 1
        *(eax_4 + 0x14) = 1
        *(eax_4 + 0x24) = 4
        sub_4c68d0(eax_4, 0x3ea)
        result = (*(*data_27e7bb4 + 0x24))(*(arg1 + 4), &var_18)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
