// 函数名称: sub_561690
// 虚拟地址: 0x561690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_561690(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(data_3079204 + 0x2c) = arg2
    *(data_3079204 + 0x2c) = arg2
    
    if (CreateDXGIFactory1(&data_89427c, arg1 + 8) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x5ea, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_3 = *(arg1 + 8)
    
    if ((*(*eax_3 + 0x1c))(eax_3, 0, arg1 + 0xc) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x5ed, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    struct IDXGIAdapter pAdapter = *(arg1 + 0xc)
    enum D3D_DRIVER_TYPE DriverType
    DriverType.b = pAdapter == 0
    
    if (D3D11CreateDevice(pAdapter, DriverType, nullptr, D3D11_CREATE_DEVICE_BGRA_SUPPORT, nullptr, 0, 
            7, arg1 + 4, nullptr, arg1 + 0x10) s< 0)
        sub_4c5870("HaltMsg", "Failed to Create DX11 Device", "Windows\WindowsDx11.cpp", 0x5fd, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_563380(arg1)
    int32_t* edi_2 = *(arg1 + 4)
    
    if ((**edi_2)(edi_2, 0x89428c, &arg2) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x605, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_12 = arg2
    int32_t* var_8
    
    if ((*(*eax_12 + 0x18))(eax_12, 0x89429c, &var_8) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x609, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_16 = var_8
    int32_t* var_c
    
    if ((*(*eax_16 + 0x18))(eax_16, &data_89427c, &var_c) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x60d, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_20 = var_c
    int32_t result = (*(*eax_20 + 0x20))(eax_20, *(data_3079204 + 0x2c), 2)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x611, 
        "Dx11GraphicsInterface::GraphicsInterfaceAttach")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
