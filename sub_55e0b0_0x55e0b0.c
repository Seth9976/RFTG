// 函数名称: sub_55e0b0
// 虚拟地址: 0x55e0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55e0b0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_34
    sub_5abfc0(&var_34, 0, 0x2c)
    int32_t var_30 = arg3
    var_34 = arg2
    int32_t var_2c = arg5
    int32_t var_28 = arg4
    int32_t var_24 = sub_55e050(arg2, arg6)
    int32_t var_20 = 1
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_10 = 0
    char var_c = 0
    
    if (arg7 == 0)
        if (arg4 != 1)
            sub_4c5870("depth == 1", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x225, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_14 = 8
        
        if (*(data_27e7fd0 + 0x21) != 0 && arg5 == 1)
            int32_t var_14_1 = 0x28
            int32_t var_2c_1 = 0
            var_c = 1
    else if (arg7 != 1)
        if (arg7 == 2)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x23a, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg7 == 3)
            int32_t var_14_3 = 0x28
        else if (arg7 == 4)
            int32_t var_14_5 = 0x40
        else if (arg7 != 5)
            if (arg7 != 6)
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x250, 
                    "Dx11GraphicsInterface::CreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_20_2 = *(arg1 + 0x68)
            var_14_5 = 0x40
        else
            int32_t var_20_1 = *(arg1 + 0x68)
            int32_t var_14_4 = 0x20
    else
        if (arg2 != arg3)
            sub_4c5870("width == height", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x232, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg4 != 6)
            sub_4c5870("depth == 6", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x233, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_14_2 = 8
        var_c = 4
    
    int128_t* eax_10 = sub_563dc0(arg1 + 0x40)
    *eax_10 = 2
    int32_t* eax_11 = *(arg1 + 4)
    
    if ((*(*eax_11 + 0x14))(eax_11, &var_34, 0, eax_10 + 0x1c) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x257, 
            "Dx11GraphicsInterface::CreateTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg7 == 4 || arg7 == 6)
        int32_t* edi_3 = *(arg1 + 4)
        
        if ((*(*edi_3 + 0x28))(edi_3, *(eax_10 + 0x1c), 0, eax_10 + 0x24) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x25c, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else if (arg7 != 3)
        int32_t* edi_2 = *(arg1 + 4)
        
        if (arg7 != 5)
            if ((*(*edi_2 + 0x1c))(edi_2, *(eax_10 + 0x1c), 0, &eax_10[2]) s< 0)
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x26e, 
                    "Dx11GraphicsInterface::CreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if ((var_c & 1) != 0)
                *(eax_10 + 6) = 1
        else if ((*(*edi_2 + 0x24))(edi_2, *(eax_10 + 0x1c), 0, &eax_10[3]) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x269, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        int32_t* eax_16 = *(arg1 + 4)
        
        if ((*(*eax_16 + 0x24))(eax_16, *(eax_10 + 0x1c), 0, &eax_10[3]) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x261, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* edi_1 = *(arg1 + 4)
        
        if ((*(*edi_1 + 0x1c))(edi_1, *(eax_10 + 0x1c), 0, &eax_10[2]) s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x264, 
                "Dx11GraphicsInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    int32_t result = *(eax_10 + 0x248)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
