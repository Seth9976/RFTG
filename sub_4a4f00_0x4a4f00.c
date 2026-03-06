// 函数名称: sub_4a4f00
// 虚拟地址: 0x4a4f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a4f00(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* edi = arg2
    int32_t* ebx = &arg3[edi * 0x2d + 8]
    int32_t edx = arg4 * 5
    void* ecx_2 = &arg3[edx + 0x119]
    int32_t ecx_3 = *(ecx_2 + 8)
    char* var_730 = edi
    int32_t result_2 = 0
    int32_t* var_740 = ebx
    
    if ((*(ecx_3 + 0x10) & 0x200000) != 0)
        ecx_3, edx = sub_49e100(arg4, arg3, edi, arg4, 0xffffffff)
        ebx = var_740
    
    void var_72c
    void* var_760 = &var_72c
    int32_t var_764_2 = 3
    int32_t eax_4 = sub_49dea0(edi, edx, ecx_3, arg3)
    int32_t eax_5 = sx.d(arg3[0x7b0].b)
    
    if (eax_5 s>= 0)
        bool cond:2_1
        
        if (eax_5.b s< 0)
            if (ebx[3] == eax_5)
                goto label_4a4fbf
            
            cond:2_1 = ebx[4] != eax_5
            goto label_4a4fbd
        
        if ((ebx[3] & 0x7f) == eax_5)
        label_4a4fbf:
            
            if (*(ebx + 0x1d) == 0)
                sub_49cd90(arg3, "his Settle bonus")
                *(var_740 + 0x1d) = 1
        else
            cond:2_1 = (ebx[4] & 0x7f) != eax_5
        label_4a4fbd:
            
            if (not(cond:2_1))
                goto label_4a4fbf
    
    int32_t result = 0
    int32_t result_1 = 0
    
    if (eax_4 s> 0)
        void* edx_5
        
        do
            void var_728
            void* ebx_4 = *(&var_728 + (result << 3))
            edx_5 = *arg3[sx.d(*(&var_72c + (result << 3))) * 5 + 0x11b]
            void* var_744_1 = ebx_4
            void* var_73c_1 = edx_5
            
            if ((*(ebx_4 + 8) & 0x80000) != 0)
                edx_5 = sub_49cf20(arg3, edi, sx.d(*(ebx_4 + 0x10)), edx_5)
                edi = var_730
            
            if ((*(ebx_4 + 8) & &__dos_header) != 0)
                edx_5 = *(ecx_2 + 8)
                int32_t eax_15 = *(edx_5 + 0x10)
                
                if ((eax_15.b & 0x40) != 0 && (eax_15.b & 1) != 0)
                    *(ebx_4 + 0x10)
                    edx_5 = sub_49d110(eax_15, edx_5, var_73c_1, arg3, edi)
                    ebx_4 = var_744_1
                    edi = var_730
            
            if ((*(ebx_4 + 0xc) & 2) != 0)
                void* eax_18 = *(ecx_2 + 8)
                
                if (*(eax_18 + 0xe) s> 0 && (*(eax_18 + 0x10) & 2) == 0)
                    *(ebx_4 + 0x10)
                    edx_5 = sub_49d110(eax_18, edx_5, var_73c_1, arg3, edi)
                    ebx_4 = var_744_1
                    edi = var_730
            
            if ((*(ebx_4 + 8) & 0x100000) != 0)
                edx_5 = sub_49cf20(arg3, edi, sx.d(*(ebx_4 + 0x10)), var_73c_1)
                edi = var_730
                result_2 += 1
            
            if (arg5 == 0 && (*(ebx_4 + 0xc) & 1) != 0)
                void* eax_24 = *(ecx_2 + 8)
                
                if (*(eax_24 + 0xe) s> 0 && (*(eax_24 + 0x10) & 2) == 0)
                    edx_5 = sub_49df80(arg3, arg4)
                    edi = var_730
            
            result = result_1 + 1
            result_1 = result
        while (result s< eax_4)
        
        result = result_2
        
        if (result != 0)
            result = sub_49dd50(result, edx_5, edi, arg3, result)
            
            if (arg3[6].b == 0)
                char* const eax_26 = &data_83f3d3
                
                if (result_2 != 1)
                    eax_26 = &data_85f840
                
                char* const var_760_7 = eax_26
                int32_t result_3 = result_2
                int32_t var_768_1 = *var_740
                void var_40c
                sub_5a733b(&var_40c, "%s discards %d card%s.\n")
                char const* const var_760_8 = "verbose"
                void* var_764_5 = &var_40c
                result = sub_4c5680("%s (%s)")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
