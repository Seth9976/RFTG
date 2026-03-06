// 函数名称: sub_49cf20
// 虚拟地址: 0x49cf20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_49cf20(int32_t* arg1 @ esi, int32_t arg2 @ edi, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = arg4
    
    if (arg1[6].b == 0 && result != 0)
        char* const ecx_1 = &data_83f3d3
        
        if (arg3 != 1)
            ecx_1 = &data_85f840
        
        void* result_1 = result
        char* const var_824_1 = ecx_1
        int32_t var_828_1 = arg3
        int32_t var_82c_1 = arg1[arg2 * 0x2d + 8]
        void var_40c
        sub_5a733b(&var_40c, "%s receives %d card%s from %s.\n")
        char const* const var_838_1 = "verbose"
        void* var_83c_1 = &var_40c
        result = sub_4c5680("%s (%s)")
    
    if (arg3 s> 0)
        void* ebx_3 = arg2 * 0xb4 + arg1
        void* var_810_1 = ebx_3
        int32_t i_1 = arg3
        int32_t i
        
        do
            *(ebx_3 + 0xb2) += 1
            *(ebx_3 + 0xb3) = 0
            
            if (arg1[6].b == 0)
                int32_t ecx_4
                
                if (*arg1 == 0)
                    result, ecx_4 = sub_49ca40(arg1)
                else
                    int32_t eax_5 = arg1[1]
                    
                    if (*(eax_5 + (arg2 << 2) + 0x1ec0) s>= *(eax_5 + (arg2 << 2) + 0x1ed8))
                        result, ecx_4 = sub_49ca40(arg1)
                    else
                        ecx_4 = eax_5
                        int32_t edx_3 = *(ecx_4 + (arg2 << 2) + 0x1ec0)
                        result = *(ecx_4 + ((arg2 * 0x148 + edx_3) << 2))
                        *(ecx_4 + (arg2 << 2) + 0x1ec0) = edx_3 + 1
                        
                        if (result s< 0)
                            result, ecx_4 = sub_49ca40(arg1)
                
                void* result_2 = result
                
                if (result_2 == 0xffffffff)
                    ebx_3 = var_810_1
                else
                    int32_t var_820_1 = 2
                    sub_49cc30(arg1, result_2, ecx_4, arg2)
                    void* ecx_5 = result_2 * 5
                    int32_t edx_6
                    edx_6.w = arg1[ecx_5 + 0x11a].w
                    edx_6.w &= 0xffc0
                    result.w = 1 << arg2.b
                    edx_6.w |= result.w
                    arg1[ecx_5 + 0x11a].w = edx_6.w
                    
                    if (arg1[6].b != 0)
                        ebx_3 = var_810_1
                    else
                        void* result_3 = result_2
                        sub_49b590(arg2, edx_6)
                        result = *(var_810_1 + 0x28)
                        
                        if (*(result + 0x20) == 0)
                            ebx_3 = var_810_1
                        else
                            ebx_3 = var_810_1
                            int32_t var_820_2 = *arg1[ecx_5 + 0x11b]
                            int32_t var_824_3 = *(ebx_3 + 0x20)
                            void var_80c
                            sub_5a733b(&var_80c, "%s draws %s.\n")
                            result = (*(*(ebx_3 + 0x28) + 0x20))(arg1, arg2, &var_80c, "draw")
            else
                *(ebx_3 + 0xae) += 1
                result = sub_49cb90(arg1)
                
                if (result != 0xffffffff)
                    result *= 5
                    *(&arg1[result] + 0x465) = 1
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
