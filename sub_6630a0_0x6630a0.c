// 函数名称: sub_6630a0
// 虚拟地址: 0x6630a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6630a0(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t ebx = 1 << (8 - arg3).b
    int32_t ebx = 1 << (8 - arg3).b
    int32_t var_1c = ebx
    int128_t* eax_4 = sub_6665d0(arg1, ebx << 2)
    int32_t esi = 0
    *arg2 = eax_4
    
    if (ebx != 0)
        do
            *(eax_4 + (esi << 2)) = sub_6664e0(arg1, 0x200)
            esi += 1
        while (esi u< ebx)
    
    int32_t esi_1 = 0
    int32_t i = 0
    int32_t i_1 = 0
    
    do
        int16_t eax_7 = i.w * 0x101
        int16_t eax_13
        
        if (zx.d(eax_7) + 0x7f u> 0xfffd)
            eax_13 = eax_7 + 0x80
        else
            arg2 = zx.d(eax_7) + 0x80
            unimplemented  {fild st0, dword [ebp+0xc]}
            
            if (zx.d(eax_7) + 0x80 s< 0)
                unimplemented  {fadd qword [0x8a5650]}
            
            unimplemented  {fdiv st0, qword [0x8a5640]}
            unimplemented  {fild st0, dword [ebp+0x14]}
            unimplemented  {fmul st0, qword [0x82e388]}
            int32_t mxcsr
            int16_t x87control
            int16_t x87control_1 = sub_686c10(mxcsr, x87control)
            unimplemented  {fmul st0, qword [0x8a5640]}
            unimplemented  {fadd qword [0x8a5368]}
            void* var_30
            var_30.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            int16_t x87control_2 = sub_686950(mxcsr, x87control_1, var_30)
            unimplemented  {call 0x686950}
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
            arg2:2.w = temp0_1
            int16_t x87control_3
            int16_t x87status_2
            x87control_3, x87status_2 = __fldcw_memmem16(arg2:2.w | 0xc00)
            int16_t var_10_2 = (int.d(unimplemented  {fistp dword [ebp-0xc], st0})).w
            unimplemented  {fistp dword [ebp-0xc], st0}
            int16_t top = top + 1
            eax_13 = var_10_2
            int16_t x87status_3
            x87control, x87status_3 = __fldcw_memmem16(arg2:2.w)
        
        if (esi_1 u< (zx.d(eax_13) * ((1 << (0x10 - arg3.b)) - 1) + 0x8000) u/ 0xffff + 1)
            int32_t eax_15 = 0xff u>> arg3.b
            arg2 = eax_15
            
            while (true)
                uint32_t ebx_2 = esi_1 u>> (8 - arg3).b
                int32_t eax_17 = *(eax_4 + ((eax_15 & esi_1) << 2))
                esi_1 += 1
                *(eax_17 + (ebx_2 << 1)) = eax_7
                
                if (esi_1 u>= (zx.d(eax_13) * ((1 << (0x10 - arg3.b)) - 1) + 0x8000) u/ 0xffff + 1)
                    break
                
                eax_15 = arg2
            
            ebx = var_1c
        
        i = i_1 + 1
        i_1 = i
    while (i u< 0xff)
    
    int32_t ebx_3 = ebx << 8
    
    if (esi_1 u< ebx_3)
        i = 0xff s>> arg3.b
        
        do
            uint32_t ebx_5 = esi_1 u>> (8 - arg3).b
            int32_t ecx_11 = *(eax_4 + ((i & esi_1) << 2))
            esi_1 += 1
            *(ecx_11 + (ebx_5 << 1)) = 0xffff
        while (esi_1 u< ebx_3)
    
    return i
}
