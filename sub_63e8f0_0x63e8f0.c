// 函数名称: sub_63e8f0
// 虚拟地址: 0x63e8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63e8f0(void* arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    int32_t edi = arg5
    
    if (esi == edi)
        void* eax_5 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi + *(arg1 + 0x14)
        
        if (arg2 s> arg4)
            void* eax_9 = eax_5 + arg4
            
            if (arg7 != 0)
                void* __saved_ebx_3 = arg2 - arg4 + 1
                int32_t var_24_3 = arg6
                void* var_28_3 = eax_9
                return sub_5cd100()
            
            void* __saved_ebx_2 = arg2 - arg4
            int32_t var_24_2 = arg6
            void* var_28_2 = eax_9 + 1
            return sub_5cd100()
        
        void* eax_6 = eax_5 + arg2
        void* __saved_ebx_4 = arg4 - arg2
        
        if (arg7 == 0)
            void* __saved_ebx_1 = __saved_ebx_4
            int32_t var_24_1 = arg6
            void* var_28_1 = eax_6
            return sub_5cd100()
        
        void* __saved_ebx = __saved_ebx_4 + 1
        int32_t var_24 = arg6
        void* var_28 = eax_6
        return sub_5cd100()
    
    int32_t result
    
    if (arg2 != arg4)
        int32_t eax_18
        int32_t edx_9
        edx_9:eax_18 = sx.q(arg2 - arg4)
        int32_t i_5 = esi - edi
        int32_t eax_22
        int32_t edx_10
        edx_10:eax_22 = sx.q(i_5)
        
        if ((eax_18 ^ edx_9) - edx_9 != (eax_22 ^ edx_10) - edx_10)
            int32_t eax_31
            int32_t edx_13
            edx_13:eax_31 = sx.q(arg4 - arg2)
            int32_t ecx_27 = (eax_31 ^ edx_13) - edx_13
            int32_t eax_34
            int32_t edx_14
            edx_14:eax_34 = sx.q(edi - esi)
            int32_t eax_36 = (eax_34 ^ edx_14) - edx_14
            int32_t var_14_1
            int32_t var_c_1
            int32_t var_8_1
            int32_t ecx_28
            int32_t edx_17
            int32_t ebx_1
            
            if (ecx_27 s< eax_36)
                ebx_1 = ecx_27 * 2
                arg3 = eax_36 + 1
                edx_17 = ebx_1 - eax_36
                result = 1
                var_14_1 = (ecx_27 - eax_36) * 2
                ecx_28 = 0
                var_8_1 = 1
                var_c_1 = 1
            else
                ebx_1 = eax_36 * 2
                arg3 = ecx_27 + 1
                edx_17 = ebx_1 - ecx_27
                ecx_28 = 1
                var_14_1 = (eax_36 - ecx_27) * 2
                var_8_1 = 1
                result = 0
                var_c_1 = 1
            
            arg5 = ecx_28
            
            if (arg2 s> arg4)
                arg5 = neg.d(ecx_28)
                var_8_1 = 0xffffffff
            
            if (esi s> edi)
                result = neg.d(result)
                var_c_1 = 0xffffffff
            
            int32_t edi_2 = arg2
            int32_t ebx_3 = arg3
            
            if (arg7 == 0)
                ebx_3 -= 1
            
            if (ebx_3 s> 0)
                arg3 = ebx_3
                int32_t i
                
                do
                    void* ecx_32
                    ecx_32.b = arg6.b
                    (*(arg1 + 0x10) * esi + *(arg1 + 0x14))[edi_2] = ecx_32.b
                    
                    if (edx_17 s>= 0)
                        edx_17 += var_14_1
                        edi_2 += var_8_1
                        esi += var_c_1
                    else
                        edx_17 += ebx_1
                        edi_2 += arg5
                        esi += result
                    
                    i = arg3
                    arg3 -= 1
                while (i != 1)
        else
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            char* ecx_22
            int32_t i_4
            
            if (esi s> edi)
                ecx_22 = temp0_3 * edi + *(arg1 + 0x14) + arg4
                
                if (arg4 s> arg2)
                    result = temp0_3 - 1
                else
                    result = temp0_3 + 1
                
                if (arg7 == 0)
                    ecx_22 = &ecx_22[result]
                
                i_4 = i_5
            else
                ecx_22 = temp0_3 * esi + *(arg1 + 0x14) + arg2
                
                if (arg2 s> arg4)
                    result = temp0_3 - 1
                    i_4 = edi - esi
                else
                    result = temp0_3 + 1
                    i_4 = edi - esi
            
            if (arg7 != 0)
                i_4 += 1
            
            if (i_4 != 0)
                void* edx_12
                edx_12.b = arg6.b
                int32_t i_1
                
                do
                    *ecx_22 = edx_12.b
                    ecx_22 = &ecx_22[result]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
    else
        result = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        char* ecx_12
        int32_t i_3
        
        if (esi s> edi)
            ecx_12 = result * edi + *(arg1 + 0x14) + arg2
            
            if (arg7 != 0)
                i_3 = esi - edi + 1
            else
                ecx_12 = &ecx_12[result]
                i_3 = esi - edi
        else
            int32_t i_6 = edi - esi
            ecx_12 = result * esi + *(arg1 + 0x14) + arg2
            
            if (arg7 == 0)
                i_3 = i_6
            else
                i_3 = i_6 + 1
        
        if (i_3 != 0)
            void* edx_8
            edx_8.b = arg6.b
            char* ecx_15 = ecx_12
            int32_t i_2
            
            do
                *ecx_15 = edx_8.b
                ecx_15 = &ecx_15[result]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
    
    return result
}
