// 函数名称: sub_662f30
// 虚拟地址: 0x662f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_662f30(void* arg1, int128_t** arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char edx = arg3.b
    char edx = arg3.b
    int32_t esi = 1 << (8 - edx)
    int128_t* result = sub_6665d0(arg1, esi << 2)
    int32_t edi = 0
    int128_t* result_1 = result
    *arg2 = result
    
    if (esi != 0)
        do
            int32_t edx_2 = sub_6664e0(arg1, 0x200)
            int32_t i = 0
            int32_t var_c_1 = edx_2
            *(result_1 + (edi << 2)) = edx_2
            
            if (arg4 - 0x17318 u<= 0x2710)
                do
                    result = (i << (8 - edx)) + edi
                    
                    if (arg3 != 0)
                        result =
                            divu.dp.d(0:(result * 0xffff + (1 << (0xf - edx))), (1 << (0x10 - edx)) - 1)
                        edx_2 = var_c_1
                    
                    *(edx_2 + (i << 1)) = result.w
                    i += 1
                while (i u< 0x100)
            else
                unimplemented  {fild st0, dword [ebp-0x4]}
                
                if ((1 << (0x10 - edx)) - 1 s< 0)
                    unimplemented  {fadd qword [0x8a5650]}
                
                double var_28_1 = fconvert.d(unimplemented  {fstp qword [ebp-0x24], st0})
                unimplemented  {fstp qword [ebp-0x24], st0}
                unimplemented  {fild st0, dword [ebp+0x14]}
                unimplemented  {fmul st0, qword [0x82e388]}
                double var_30_1 = fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                unimplemented  {fstp qword [ebp-0x2c], st0}
                
                do
                    int32_t edx_4 = i << (8 - edx)
                    arg2 = edx_4 + edi
                    unimplemented  {fild st0, dword [ebp+0xc]}
                    
                    if (edx_4 + edi s< 0)
                        unimplemented  {fadd qword [0x8a5650]}
                    
                    unimplemented  {fdiv st0, qword [ebp-0x24]}
                    unimplemented  {fld st0, qword [ebp-0x2c]}
                    int32_t mxcsr
                    int16_t x87control
                    int16_t x87control_1 = sub_686c10(mxcsr, x87control)
                    unimplemented  {fmul st0, qword [0x8a5640]}
                    unimplemented  {fadd qword [0x8a5368]}
                    void* var_44_1
                    var_44_1.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    int16_t x87control_2 = sub_686950(mxcsr, x87control_1, var_44_1)
                    unimplemented  {call 0x686950}
                    int16_t x87status_1
                    int16_t temp0_1
                    temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
                    arg2:2.w = temp0_1
                    i += 1
                    int16_t x87control_3
                    int16_t x87status_2
                    x87control_3, x87status_2 = __fldcw_memmem16((zx.d(arg2:2.w) | 0xc00).w)
                    int16_t var_18_2 = (int.d(unimplemented  {fistp dword [ebp-0x14], st0})).w
                    unimplemented  {fistp dword [ebp-0x14], st0}
                    int16_t top = top + 1
                    result.w = var_18_2
                    *(var_c_1 + (i << 1) - 2) = result.w
                    int16_t x87status_3
                    x87control, x87status_3 = __fldcw_memmem16(arg2:2.w)
                while (i u< 0x100)
            
            edi += 1
        while (edi u< esi)
    
    return result
}
