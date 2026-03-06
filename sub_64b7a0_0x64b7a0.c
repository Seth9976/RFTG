// 函数名称: sub_64b7a0
// 虚拟地址: 0x64b7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_64b7a0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = *(arg1 + 0x1c)
    int32_t* ebx = *(arg1 + 0x1c)
    int128_t* result = sub_5abfc0(arg2, 0, 0x30)
    
    if (ebx != 0xfffff2e0 && ebx[0x34b] s> 0)
        int32_t ecx_2 = *ebx
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(ebx[1])
        double var_14_1 = fconvert.d(float.t(ecx_2 s>> 1))
        double var_c_1 = fconvert.d(float.t(*(arg1 + 8)))
        *arg2 = 1
        arg2[6] = divs.dp.d(edx_2:eax_4, ecx_2)
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_686950(mxcsr, x87control, 0f)
        arg2[3] = sub_685f40(st0_1)
        int16_t x87control_2
        long double st0_2
        st0_2, x87control_2 = sub_686950(mxcsr, x87control_1, 0f)
        arg2[4] = sub_685f40(st0_2)
        int32_t eax_8 = sub_685f40(sub_686950(mxcsr, x87control_2, 0f))
        *(arg2 + 0x20) = fconvert.d(fconvert.t(7.0))
        arg2[5] = eax_8
        result = sub_685f40(float.t(ebx[0x34b]) * fconvert.t(*(ebx + 0xd30)))
        arg2[2] = result
        arg2[1] = result
    
    return result
}
