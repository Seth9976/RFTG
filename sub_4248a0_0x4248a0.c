// 函数名称: sub_4248a0
// 虚拟地址: 0x4248a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4248a0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_1 = sx.d(*(arg1 + 0x460))
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    
    if (i_1 s> 0)
        void* eax_2 = arg1 + 0x464
        int32_t i
        
        do
            if (*(eax_2 + 1) == 2)
                int32_t ecx = sx.d(*eax_2)
                (&var_18)[ecx] += 1
            
            eax_2 += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_3 = data_c020d0
    int32_t ecx_2
    ecx_2.b = eax_3 s<= 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3 & (ecx_2 - 1)
}
