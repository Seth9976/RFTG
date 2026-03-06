// 函数名称: sub_55f100
// 虚拟地址: 0x55f100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_55f100(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    
    if (arg2 == 0)
        return 
    
    uint32_t eax = zx.d(arg2.w)
    
    if (eax u>= *(arg1 + 0x44))
        return 
    
    uint32_t edi_1 = eax * 0x24c + *(arg1 + 0x40)
    
    if (*(edi_1 + 0x248) != arg2)
        return 
    
    int32_t* eax_2 = *(edi_1 + 0x18)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
    
    int32_t* esi_1 = edi_1 + 0x204
    int32_t i_1 = 0x11
    int32_t i
    
    do
        if (*esi_1 != 0)
            int32_t* eax_3 = *esi_1
            (*(*eax_3 + 8))(eax_3)
        
        esi_1 = &esi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax_4 = *edi_1
    int32_t* eax_8
    
    if (eax_4 == 3)
        eax_8 = *(edi_1 + 0x28)
    else
        if (eax_4 != 4)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x3fc, 
                "Dx11GraphicsInterface::ReleaseShaderBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_8 = *(edi_1 + 0x2c)
    
    if (eax_8 != 0)
        (*(*eax_8 + 8))(eax_8)
    
    eax = *(arg1 + 0x4c)
    *(arg1 + 0x4c) = zx.d(*(edi_1 + 0x248))
    *(edi_1 + 0x248) = eax
    *(arg1 + 0x50) -= 1
}
