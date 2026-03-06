// 函数名称: sub_55c680
// 虚拟地址: 0x55c680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_55c680(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(data_3079200 + 8)
    int32_t* ecx = *(data_3079200 + 8)
    int32_t* esi = arg1[0xd4]
    int32_t eax_1 = sub_54c6a0(*esi)
    
    if (eax_1 != 0)
        int32_t eax_3
        int32_t edx_2
        eax_3, edx_2 = (*(*ecx + 0x170))(ecx, eax_1)
        
        if (eax_3 s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x7e6, 
                "Dx9GraphicsInterface::GraphicsMaterialSetup")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx
        ebx.b = 1
        sub_55c0d0(esi[1], edx_2, &esi[2], arg1)
        eax_1 = sub_54c6a0(esi[0x10b])
        
        if (eax_1 != 0)
            int32_t eax_7
            int32_t edx_4
            eax_7, edx_4 = (*(*ecx + 0x1ac))(ecx, eax_1)
            
            if (eax_7 s>= 0)
                int32_t ebx_1
                ebx_1.b = 0
                int32_t eax_10
                int32_t edx_5
                eax_10, edx_5 = sub_55c0d0(esi[0x10c], edx_4, &esi[0x10d], arg1)
                sub_55c380(eax_10, edx_5, &esi[0x219], esi[0x216])
                void* eax_11
                eax_11.b = 1
                return eax_11
            
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x7f6, 
                "Dx9GraphicsInterface::GraphicsMaterialSetup")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    eax_1.b = 0
    return eax_1
}
