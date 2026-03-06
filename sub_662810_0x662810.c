// 函数名称: sub_662810
// 虚拟地址: 0x662810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_662810(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char var_d = arg2.b
    uint8_t var_f = (arg2 u>> 0x10).b
    uint8_t var_e = (arg2 u>> 8).b
    
    if (arg1 != 0)
        int32_t ecx_4 = *(arg1 + 0x248)
        
        if (ecx_4 s> 0)
            int32_t edx_2 = *(arg1 + 0x24c)
            int32_t* eax_5 = ecx_4 * 5 + edx_2
            
            do
                eax_5 -= 5
                
                if ((arg2 u>> 0x18).b.d == *eax_5)
                    uint32_t result = zx.d(eax_5[1].b)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return result
            while (eax_5 u> edx_2)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
