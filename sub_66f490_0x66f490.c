// 函数名称: sub_66f490
// 虚拟地址: 0x66f490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_66f490(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5, uint32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    arg4[2] = 0
    arg4[3] = 0
    arg4[4] = 0
    *arg4 = 0
    arg4[1] = arg3
    
    if (arg6 == 0xffffffff)
        *arg4 = arg5
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg3
    
    if (arg6 s>= 3)
        void var_108
        sub_663f40(&var_108, 1, 1, arg6)
        sub_664180(arg2, &var_108, "Unknown compression type @1")
    
    sub_66f220(arg2, 2)
    int32_t ecx_2 = *(arg2 + 0xb4)
    int32_t edx = *(arg2 + 0xb0)
    *(arg2 + 0x7c) = arg3
    *(arg2 + 0x78) = arg5
    *(arg2 + 0x88) = ecx_2
    *(arg2 + 0x84) = edx
    
    while (true)
        int32_t eax_7 = sub_6746d0(arg2 + 0x78, 0)
        
        if (eax_7 != 0)
            break
        
        if (*(arg2 + 0x88) == eax_7)
            int32_t ecx_3 = arg4[3]
            int32_t eax_8 = arg4[2]
            
            if (eax_8 s>= ecx_3)
                int128_t* ebx_1 = arg4[4]
                arg4[3] = eax_8 + 4
                int128_t* eax_12 = sub_6664e0(arg2, (eax_8 + 4) * 4)
                arg4[4] = eax_12
                
                if (ebx_1 != 0)
                    sub_5ab990(eax_12, ebx_1, ecx_3 << 2)
                    sub_666530(arg2, ebx_1)
            
            *(arg4[4] + (arg4[2] << 2)) = sub_6664e0(arg2, *(arg2 + 0xb4))
            sub_5ab990(*(arg4[4] + (arg4[2] << 2)), *(arg2 + 0xb0), *(arg2 + 0xb4))
            arg4[2] += 1
            int32_t edx_5 = *(arg2 + 0xb0)
            *(arg2 + 0x88) = *(arg2 + 0xb4)
            *(arg2 + 0x84) = edx_5
        
        if (*(arg2 + 0x7c) == 0)
            int32_t eax_17
            
            while (true)
                eax_17 = sub_6746d0(arg2 + 0x78, 4)
                
                if (eax_17 != 0)
                    break
                
                if (*(arg2 + 0x88) == eax_17)
                    int32_t ecx_9 = arg4[3]
                    int32_t eax_18 = arg4[2]
                    
                    if (eax_18 s>= ecx_9)
                        int128_t* ebx_2 = arg4[4]
                        arg4[3] = eax_18 + 4
                        int128_t* eax_22 = sub_6664e0(arg2, (eax_18 + 4) * 4)
                        arg4[4] = eax_22
                        
                        if (ebx_2 != 0)
                            sub_5ab990(eax_22, ebx_2, ecx_9 << 2)
                            sub_666530(arg2, ebx_2)
                    
                    *(arg4[4] + (arg4[2] << 2)) = sub_6664e0(arg2, *(arg2 + 0xb4))
                    sub_5ab990(*(arg4[4] + (arg4[2] << 2)), *(arg2 + 0xb0), *(arg2 + 0xb4))
                    arg4[2] += 1
                    int32_t edx_10 = *(arg2 + 0xb0)
                    *(arg2 + 0x88) = *(arg2 + 0xb4)
                    *(arg2 + 0x84) = edx_10
            
            if (eax_17 != 1)
                break
            
            int32_t ecx_15 = *(arg2 + 0xb4)
            int32_t esi_1 = *(arg2 + 0x88)
            int32_t eax_28 = arg4[2] * ecx_15
            
            if (esi_1 u< ecx_15)
                eax_28 += ecx_15 - esi_1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_28
    
    char* eax_26 = *(arg2 + 0x90)
    
    if (eax_26 == 0)
        sub_664320(arg2, "zlib error")
        noreturn
    
    sub_664320(arg2, eax_26)
    noreturn
}
