// 函数名称: sub_5468f0
// 虚拟地址: 0x5468f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_5468f0(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: if (*(arg1 + 0x425c) s> 0)
    if (*(arg1 + 0x425c) s> 0)
        return 
    
    int32_t* eax = *(data_307882c + 0x404c)
    
    if (eax == 0xffffffff)
        return 
    
    int32_t* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_54b850(arg1 + 0x4240, arg3)
    void* ecx_1 = data_307882c
    int32_t eax_3 = *eax_2
    
    if (*(ecx_1 + 0x4090) != eax_3)
        *(ecx_1 + 0x4090) = eax_3
        edx_1 = data_307943c(0x8892, eax_3)
        void* eax_4 = data_27e7fe4
        *(eax_4 + 0xc) += 1
    
    int32_t esi_2 = arg4
    int32_t var_1c_2 = esi_2
    int32_t* var_20_1 = eax
    
    if (sub_545fb0(eax_2, edx_1, eax) == 0)
        int32_t var_1c_3 = arg5
        sub_546320(eax, arg5)
        
        if (esi_2 != 0)
            data_307943c(0x8893, *sub_54b850(arg1 + 0x4240, esi_2))
        
        if (arg8 != 0)
            int32_t* eax_11 = sub_54b850(arg1 + 0x4240, arg8)
            int32_t edx_3 = sub_543f30(*eax_11)
            int32_t var_1c_5 = eax_11[0x37]
            sub_546320(eax, edx_3)
            esi_2 = arg4
    
    uint32_t mode = *((arg2 << 2) + &data_8bdc38)
    int32_t esi_5
    
    if (esi_2 == 0)
        esi_5 = arg9
        int32_t first = eax_2[0x4e]
        
        if (esi_5 s< 1)
            glDrawArrays(mode, first, arg7)
        else
            data_30796ec(mode, first, arg7, esi_5)
    else
        if (arg2 - 1 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x9ea, 
                "OpenGLInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_4
        
        switch (arg2)
            case 1
                ebx_4 = arg6
            case 2
                ebx_4 = arg6 * 2
            case 3
                ebx_4 = arg6 + 1
            case 4
                ebx_4 = arg6 * 3
            case 5
                ebx_4 = arg6 + 2
        
        void* eax_17 = sub_54b850(arg1 + 0x4240, esi_2)
        esi_5 = arg9
        int32_t ecx_6
        ecx_6.b = *(eax_17 + 0x13e) != 0
        
        if (esi_5 s< 1)
            int32_t eax_18 = *(eax_17 + 0x138)
            data_30792b8(mode, eax_18, eax_18 + arg7, ebx_4, ecx_6 * 2 + 0x1403, 0)
        else
            data_30796f0(mode, ebx_4, ecx_6 * 2 + 0x1403, 0, esi_5)
    
    int32_t ecx_10 = esi_5
    
    if (esi_5 s<= 0)
        ecx_10 = 1
    
    eax = data_27e7fe4
    eax[1] += ecx_10 * arg6
    
    if (esi_5 s<= 0)
        esi_5 = 1
    
    eax[2] += esi_5 * arg7
    *eax += 1
}
