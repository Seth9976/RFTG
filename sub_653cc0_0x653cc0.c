// 函数名称: sub_653cc0
// 虚拟地址: 0x653cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_653cc0(int32_t arg1, int32_t arg2, void* arg3, float* arg4 @ esi, int32_t arg5, float* arg6, int32_t arg7)
{
    // 第一条实际指令: void* result = *(arg3 + 4)
    void* result = *(arg3 + 4)
    int32_t var_c = 1
    int32_t var_8 = arg5
    
    if (result s> 0)
        void* var_10_1 = arg3 + (result << 2) + 4
        void* var_18_1 = result
        int32_t ebx_1 = arg5
        void* i
        
        do
            int32_t ecx_1 = *var_10_1
            int32_t temp0_1 = divs.dp.d(sx.q(ebx_1), ecx_1)
            int32_t temp0_2 = divs.dp.d(sx.q(arg5), ebx_1)
            void* eax_6 = temp0_2 * temp0_1
            var_8 -= (ecx_1 - 1) * temp0_2
            int32_t eax_9 = 1 - var_c
            var_c = eax_9
            
            if (ecx_1 == 4)
                int32_t eax_19 = temp0_2 + var_8
                float* eax_22
                float* edx_15
                
                if (var_c == 0)
                    edx_15 = arg6
                    eax_22 = arg4
                else
                    eax_22 = arg6
                    edx_15 = arg4
                
                result = sub_652050(eax_22, edx_15, temp0_2, temp0_1, arg7 + (var_8 << 2) - 4, 
                    arg7 + (eax_19 << 2) - 4, arg7 + ((eax_19 + temp0_2) << 2) - 4)
            else if (ecx_1 != 2)
                if (temp0_2 == 1)
                    int32_t edx_5 = temp0_2 - eax_9
                    int32_t var_c_1 = edx_5
                    eax_9 = edx_5
                
                int16_t top
                
                if (eax_9 == 0)
                    result = sub_6528a0(arg6, eax_6, arg4, ecx_1, temp0_1, eax_6, arg4, arg4, arg6, 
                        arg7 + (var_8 << 2) - 4)
                    top -= 1
                    unimplemented  {call 0x6528a0}
                    var_c = 1
                else
                    result = sub_6528a0(arg4, arg6, arg6, ecx_1, temp0_1, eax_6, arg6, arg6, arg4, 
                        arg7 + (var_8 << 2) - 4)
                    top -= 1
                    unimplemented  {call 0x6528a0}
                    var_c = 0
            else if (eax_9 == 0)
                result = sub_651d20(arg4, arg7 + (var_8 << 2) - 4, temp0_2, temp0_1, arg6, 
                    arg7 + (var_8 << 2) - 4)
            else
                result = sub_651d20(arg6, arg7 + (var_8 << 2) - 4, temp0_2, temp0_1, arg4, 
                    arg7 + (var_8 << 2) - 4)
            
            var_10_1 -= 4
            i = var_18_1
            var_18_1 -= 1
            ebx_1 = temp0_1
        while (i != 1)
        
        if (var_c != 1)
            int32_t edx_16 = arg5
            int32_t ebx_3 = 0
            
            if (edx_16 s>= 4)
                void* ecx_9 = &arg6[3]
                int32_t i_3 = ((edx_16 - 4) u>> 2) + 1
                result = &arg4[1]
                ebx_3 = i_3 << 2
                int32_t i_1
                
                do
                    unimplemented  {fld st0, dword [ecx-0xc]}
                    result += 0x10
                    *(result - 0x14) = fconvert.s(unimplemented  {fstp dword [eax-0x14], st0})
                    unimplemented  {fstp dword [eax-0x14], st0}
                    ecx_9 += 0x10
                    i_1 = i_3
                    i_3 -= 1
                    unimplemented  {fld st0, dword [edi+eax-0x10]}
                    *(result - 0x10) = fconvert.s(unimplemented  {fstp dword [eax-0x10], st0})
                    unimplemented  {fstp dword [eax-0x10], st0}
                    unimplemented  {fld st0, dword [ecx-0x14]}
                    *(result - 0xc) = fconvert.s(unimplemented  {fstp dword [eax-0xc], st0})
                    unimplemented  {fstp dword [eax-0xc], st0}
                    unimplemented  {fld st0, dword [ecx-0x10]}
                    *(result - 8) = fconvert.s(unimplemented  {fstp dword [eax-0x8], st0})
                    unimplemented  {fstp dword [eax-0x8], st0}
                while (i_1 != 1)
                edx_16 = arg5
            
            if (ebx_3 s< edx_16)
                result = &arg4[ebx_3]
                int32_t i_4 = edx_16 - ebx_3
                int32_t i_2
                
                do
                    unimplemented  {fld st0, dword [eax+ecx]}
                    result += 4
                    i_2 = i_4
                    i_4 -= 1
                    *(result - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                    unimplemented  {fstp dword [eax-0x4], st0}
                while (i_2 != 1)
    
    return result
}
