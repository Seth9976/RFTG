// 函数名称: sub_55a370
// 虚拟地址: 0x55a370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55a370(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t edi = arg4
    
    if (*(data_27e7fd0 + 0x21) != 0 && edi == 1 && arg6 == 0)
        esi = 0x400
        edi = 0
    
    int32_t ecx
    int32_t eax_1 = sub_55a320(ecx, arg5)
    int32_t eax_8
    
    if (arg6 == 0)
        if (arg3 != 1)
            sub_4c5870("depth == 1", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x29b, 
                "Dx9GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* ecx_2 = *(data_3079200 + 8)
        int32_t var_14_1 = 0
        eax_8 = (*(*ecx_2 + 0x5c))(ecx_2, arg1, arg2, edi, esi, eax_1, 1, &arg4, 0)
    else if (arg6 == 1)
        if (arg1 != arg2)
            sub_4c5870("width == height", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x2a0, 
                "Dx9GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == arg6)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg3 != 6)
            sub_4c5870("depth == 6", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x2a1, 
                "Dx9GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* ecx_5 = *(data_3079200 + 8)
        eax_8 = (*(*ecx_5 + 0x64))(ecx_5, arg1, edi, esi, eax_1, 1, &arg4, 0)
    else if (arg6 != 2)
        int32_t* var_34_1
        int32_t var_30
        int32_t var_2c
        int32_t var_28
        int32_t var_24
        int32_t var_20
        int32_t var_1c_1
        int32_t* var_18
        int32_t ecx_3
        
        if (arg6 == 3)
            int32_t* ecx_9 = *(data_3079200 + 8)
            int32_t var_14_2 = 0
            var_18 = &arg4
            var_1c_1 = 0
            var_20 = eax_1
            var_24 = 1
            var_28 = 1
            var_2c = arg2
            var_30 = arg1
            var_34_1 = ecx_9
            ecx_3 = *(*ecx_9 + 0x5c)
        else if (arg6 == 4)
            int32_t* ecx_10 = *(data_3079200 + 8)
            int32_t var_14_3 = 0
            var_18 = &arg4
            var_1c_1 = 0
            var_20 = eax_1
            var_24 = 2
            var_28 = 1
            var_2c = arg2
            var_30 = arg1
            var_34_1 = ecx_10
            ecx_3 = *(*ecx_10 + 0x5c)
        else if (arg6 != 5)
            if (arg6 != 6)
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x2be, 
                    "Dx9GraphicsInterface::CreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* ecx_14 = *(data_3079200 + 8)
            int32_t var_14_5 = 0
            var_18 = &arg4
            var_1c_1 = 1
            var_20 = 0
            var_24 = *(data_27e7fd0 + 0x1c)
            var_28 = eax_1
            var_2c = arg2
            var_30 = arg1
            var_34_1 = ecx_14
            ecx_3 = *(*ecx_14 + 0x74)
        else
            int32_t* ecx_12 = *(data_3079200 + 8)
            int32_t var_14_4 = 0
            var_18 = &arg4
            var_1c_1 = 0
            var_20 = 0
            var_24 = *(data_27e7fd0 + 0x1c)
            var_28 = eax_1
            var_2c = arg2
            var_30 = arg1
            var_34_1 = ecx_12
            ecx_3 = *(*ecx_12 + 0x70)
        
        eax_8 = ecx_3(var_34_1, var_30, var_2c, var_28, var_24, var_20, var_1c_1, var_18, 0)
    else
        int32_t* ecx_7 = *(data_3079200 + 8)
        eax_8 = (*(*ecx_7 + 0x60))(ecx_7, arg1, arg2, arg3, edi, esi, eax_1, 1, &arg4, 0)
    
    if (eax_8 s>= 0)
        return arg4
    
    sub_4c5680("Failed to create texture")
    return 0
}
