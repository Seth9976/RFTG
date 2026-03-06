// 函数名称: sub_671180
// 虚拟地址: 0x671180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_671180(void* arg1, int16_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char ecx = arg2[1].b
    
    if (ecx u<= 0xc && ecx u>= 1)
        ecx = *(arg2 + 3)
        
        if (ecx u<= 0x1f && ecx u>= 1 && arg2[2].b u<= 0x17)
            char edx = arg2[3].b
            
            if (edx u<= 0x3c)
                uint32_t ecx_1 = zx.d(*arg2)
                uint32_t ebx = ecx_1
                char var_f = ecx_1.b
                ecx_1.b = arg2[1].b
                char var_e = ecx_1.b
                ecx_1.b = *(arg2 + 3)
                char var_d = ecx_1.b
                ecx_1.b = arg2[2].b
                int16_t* eax_2
                eax_2.b = *(arg2 + 5)
                uint8_t var_10 = (ebx u>> 8).b
                char var_c = ecx_1.b
                char var_b = eax_2.b
                char var_a = edx
                
                if (arg1 != 0)
                    sub_66f010(arg1, 7)
                    sub_666640(arg1, &var_10, 7)
                    sub_662280(arg1, &var_10, 7)
                    eax_2 = sub_66f0f0(arg1)
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_2
    
    uint32_t eax_3 = sub_664100(arg1, "Invalid time specified for tIME chunk")
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}
