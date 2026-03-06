// 函数名称: sub_55b530
// 虚拟地址: 0x55b530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_55b530(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t* eax_1 = *(data_3079200 + 8)
    int32_t* eax_1 = *(data_3079200 + 8)
    void* esi = *eax_1
    int32_t result
    
    if (arg4 == 0)
        result = (*(esi + 0x1bc))(eax_1, arg2, arg3, 1)
    else
        result = (*(esi + 0x180))(eax_1, arg2, arg3, 1)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x581, 
        "Dx9SetShaderConstantI")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
