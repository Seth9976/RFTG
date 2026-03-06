// 函数名称: sub_4eb9a0
// 虚拟地址: 0x4eb9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4eb9a0(int32_t arg1, long double arg2 @ st2, float arg3, float* arg4)
{
    // 第一条实际指令: void* esi = *(arg3 i+ 0x2e0)
    void* esi = *(arg3 i+ 0x2e0)
    float eax
    
    if (esi != 0)
        eax = sub_466320(**(esi + 0x2e4))
        int32_t* esi_3 = *(esi + 0x2dc) * 0x134 + *eax
        
        if (*(esi_3 + arg1 + 0xc) != 0)
            int32_t* eax_2 = sub_531120(esi_3, arg1, data_315f7ec)
            int32_t eax_3
            int32_t edx_1
            eax_3, edx_1 = sub_4c95c0()
            void* ecx_2 = *(arg3 i+ 0x2e0)
            void* var_20_3 = ecx_2
            float var_20_4 = fconvert.s(fconvert.t(fconvert.s(
                fconvert.t((eax_3 & 0x7fffff) | 0x3f800000) - fconvert.t(1.0))))
            void* var_28 = ecx_2
            long double x87_r0
            long double x87_r1
            sub_553af0(eax_2, x87_r0, x87_r1, 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ecx_2 + 0x2e8))))), edx_1, 0f)
            *arg4 = fconvert.s(arg2)
            int32_t eax_8
            eax_8.b = 1
            return eax_8
    
    eax.b = 0
    return eax
}
