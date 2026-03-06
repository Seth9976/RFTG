// 函数名称: sub_55c9e0
// 虚拟地址: 0x55c9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55c9e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_24
    int32_t var_24
    int32_t var_c = __security_cookie ^ &var_24
    float var_14 = fconvert.s(float.t(0))
    int32_t* eax_3 = *(data_3079200 + 8)
    float var_10 = fconvert.s(float.t(1))
    int32_t esi
    int32_t var_28 = esi
    var_24 = arg1
    int32_t var_18 = arg4 - arg2
    int32_t var_20 = arg2
    int32_t var_1c = arg3 - arg1
    int32_t edx_2 = *(*eax_3 + 0xbc)
    int32_t* var_2c = &var_24
    int32_t result = edx_2(eax_3, var_2c)
    
    if (result s>= 0)
        sub_5a6aba(var_14 ^ &var_2c)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
