// 函数名称: sub_55ced0
// 虚拟地址: 0x55ced0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55ced0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = *(data_3079200 + 8)
    int32_t* esi = *(data_3079200 + 8)
    void* ecx_4 = *esi
    void* var_14 = ecx_4
    int32_t var_1c
    
    if (*(arg1 + 0x6c) == 0)
        var_1c = 1
    else
        var_1c = 3
    
    int32_t result = (*(ecx_4 + 0xac))(esi, 0, 0, var_1c, 
        (((((arg2 u>> 0x18 << 8) + zx.d(arg2.b)) << 8) + zx.d((arg2 u>> 8).b)) << 8)
            + zx.d((arg2 u>> 0x10).b), 
        fconvert.s(float.t(1)), 0)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x9fd, 
        "Dx9GraphicsInterface::RenderTargetClear")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
