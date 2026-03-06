// 函数名称: sub_559970
// 虚拟地址: 0x559970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_559970(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: sub_5abfc0(arg2, 0xff, 0x3c)
    sub_5abfc0(arg2, 0xff, 0x3c)
    void* eax = *(arg1 + 0x350)
    int32_t i = 0
    
    if (*(eax + 4) s> 0)
        int32_t ecx_1 = 0
        
        do
            switch (*(ecx_1 + eax + 8) - 0x53)
                case 0
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x107, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xa
                    *arg2 = *(ecx_1 + eax + 0xc)
                case 0xb
                    *(arg2 + 4) = *(ecx_1 + eax + 0xc)
                case 0xc
                    *(arg2 + 8) = *(ecx_1 + eax + 0xc)
                case 0x18
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x109, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x2a
                    *(arg2 + 0x34) = *(ecx_1 + eax + 0xc)
                case 0x2b
                    *(arg2 + 0x38) = *(ecx_1 + eax + 0xc)
                case 0x2c
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x108, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            eax = *(arg1 + 0x350)
            i += 1
            ecx_1 += 0x14
        while (i s< *(eax + 4))
    
    void* result = *(arg1 + 0x350)
    int32_t i_1 = 0
    
    if (*(result + 0x430) s> 0)
        int32_t* ecx_2 = 0x438
        
        do
            switch (*(ecx_2 + result - 4) - 0x53)
                case 0, 1, 2, 3, 4
                    int32_t eax_7 = *(arg1 + 0x350)
                    *(arg2 + (*(ecx_2 + eax_7 - 4) << 2) - 0x140) = *(ecx_2 + eax_7)
                case 0xa
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x113, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xb
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x114, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0xc
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x115, 
                        "Dx9GraphicsInterface::RenderStateGetRegisters")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                case 0x18
                    arg2[3].d = *(ecx_2 + result)
                case 0x2c
                    *(arg2 + 0x2c) = *(ecx_2 + result)
            
            result = *(arg1 + 0x350)
            i_1 += 1
            ecx_2 = &ecx_2[5]
        while (i_1 s< *(result + 0x430))
    
    return result
}
