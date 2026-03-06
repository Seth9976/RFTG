// 函数名称: sub_55b4c0
// 虚拟地址: 0x55b4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_55b4c0(char arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(data_3079200 + 8)
    int32_t* eax_1 = *(data_3079200 + 8)
    void* edi = *eax_1
    int32_t ecx
    int32_t var_c = ecx
    int32_t edx
    int32_t var_10 = edx
    int32_t esi
    int32_t var_14 = esi
    int32_t result
    
    if (arg1 == 0)
        result = (*(edi + 0x1b4))(eax_1)
    else
        result = (*(edi + 0x178))(eax_1)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x570, 
        "Dx9SetShaderConstantF")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
