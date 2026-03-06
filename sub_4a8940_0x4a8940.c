// 函数名称: sub_4a8940
// 虚拟地址: 0x4a8940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4a8940(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* ebx = arg3
    void* result = ebx * 0xb4 + arg4
    int32_t i = sx.d(*(result + 0x46))
    char* var_534 = ebx
    void* result_2 = nullptr
    void* result_1 = result
    
    if (i != 0xffffffff)
        int32_t var_52c[0x149]
        
        do
            int32_t ecx = i * 5
            result = &arg4[ecx + 0x119]
            
            if (*(&arg4[ecx] + 0x472) != 0)
                result = *(result + 8)
                int32_t j_2 = sx.d(*(result + 0x15))
                int32_t var_538_1 = 1
                
                if (j_2 s<= 0)
                    goto label_4a89e4
                
                void* ecx_1 = result + 0x18
                int32_t j_1 = j_2
                int32_t j
                
                do
                    if (*ecx_1 == 4)
                        result = *(ecx_1 + 8) & 0x80
                        
                        if (result != 0)
                            var_538_1 = 0
                    
                    ecx_1 += 0x18
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                
                if (var_538_1 != j_1 || arg6 == j_1)
                    ebx = var_534
                label_4a89e4:
                    void* result_3 = result_2
                    var_52c[result_3] = i
                    result = result_3 + 1
                    result_2 = result
                else
                    ebx = var_534
            
            i = sx.d(arg4[i * 5 + 0x11d].w)
        while (i != 0xffffffff)
        
        if (result_2 != 0)
            sub_49d720(arg4, ebx)
            int32_t eax_6 = *(result_1 + 0xc8)
            
            if (eax_6 s< *(result_1 + 0xc4))
            label_4a8a9c:
                result = sub_49d860(eax_6, 0, arg4, ebx, 0xc, &var_52c, &result_2, nullptr)
                
                if (*(arg4 + 0x1ec3) == 0)
                    result = sub_4a8710(arg6, ebx, arg4, var_52c[0], arg5, arg6)
            else
                result = (*(*(result_1 + 0x28) + 0xc))(arg4, ebx, 0xc, &var_52c, &result_2, 0, 0, arg5, 
                    0, 0, 0)
                
                if (*(arg4 + 0x1ec3) == 0)
                    eax_6 = *(*(result_1 + 0x28) + 0x10)
                    
                    if (eax_6 != 0)
                        eax_6 = eax_6(arg4, ebx, 0xc)
                    
                    int32_t var_548_1 = 0
                    goto label_4a8a9c
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
