// 函数名称: sub_4c3530
// 虚拟地址: 0x4c3530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c3530(void* arg1, float* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x20)
    int32_t eax = *(arg1 + 0x20)
    
    if (eax u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\VirtualKeyboard.cpp", 0xe9, "VKGetActiveKeyBoard")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* eax_1
    int32_t ebx
    
    switch (eax)
        case 0
            ebx = 0x20
            eax_1 = &data_be40d0
        case 1
            ebx = 0x20
            eax_1 = &data_be4350
        case 2
            eax_1 = &data_be45d0
            ebx = 0x1f
        case 3
            eax_1 = &data_be4840
            ebx = 0x1f
    
    float var_2c
    
    if (ebx s> 0)
        void* esi_1 = eax_1 + 8
        int32_t edi_1 = 0
        
        do
            long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(*(esi_1 - 4))))
            long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*esi_1)))
            var_2c = fconvert.s(x87_r7_3)
            float var_28_1 = fconvert.s(x87_r6_1)
            float var_24_1 = fconvert.s(x87_r7_3 + fconvert.t(*(esi_1 + 4)))
            float var_20_1 = fconvert.s(x87_r6_1 + fconvert.t(*(esi_1 + 8)))
            
            if (sub_4057a0(&var_2c, arg2) != 0)
                arg3[4] = 1
                *arg3 = *(esi_1 - 8)
                int32_t* eax_8
                eax_8.b = 1
                return eax_8
            
            edi_1 += 1
            esi_1 += 0x14
        while (edi_1 s< ebx)
    
    var_2c = fconvert.s(fconvert.t(-12f))
    float var_28_2 = fconvert.s(float.t(0))
    float var_24_2 = fconvert.s(fconvert.t(1256f))
    float var_20_2 = fconvert.s(float.t(0) + fconvert.t(695.0))
    
    if (sub_4057a0(&var_2c, arg2) == 0)
        return 0
    
    arg3[4] = 2
    *arg3 = 0
    int32_t* eax_7
    eax_7.b = 1
    return eax_7
}
