// 函数名称: sub_4099a0
// 虚拟地址: 0x4099a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4099a0()
{
    // 第一条实际指令: *(data_27e7fe4 + 0x254) = data_307cc78
    *(data_27e7fe4 + 0x254) = data_307cc78
    int32_t eax_1 = data_27c05e8
    
    if (eax_1 == 1 || eax_1 == 2 || eax_1 == 3)
        sub_413040()
        return sub_407970(&data_27e7a28)
    
    if (eax_1 == 4)
        sub_476800()
        return sub_407970(&data_27e7a28)
    
    if (eax_1 == 7)
        sub_47a940()
        return sub_407970(&data_27e7a28)
    
    if (eax_1 != 8)
        if (eax_1 == 5)
            sub_4075c0()
            sub_403a80()
            sub_407670()
            return sub_407970(&data_27e7a28)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameApp.cpp", 0x46c, "GameAppDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    long double x87_r7_1 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7_1)
    void* eax_4 = data_27e7fd0
    float var_40 = fconvert.s(fconvert.t(fconvert.s(x87_r7_1)))
    float var_38 = fconvert.s(fconvert.t(0.100000001f))
    int32_t var_1c = 0
    float var_34 = fconvert.s(fconvert.t(100f))
    int32_t var_14 = 0
    float var_c = fconvert.s(float.t(0))
    int32_t var_2c = 0
    int32_t var_24 = 0
    int32_t var_18 = 0
    char var_10 = 0
    int32_t var_28 = 0
    int32_t var_20 = 0x3f800000
    float var_3c = fconvert.s(float.t(*(eax_4 + 0x18)) / float.t(*(eax_4 + 0x14)))
    float var_30 = fconvert.s(float.t(1))
    sub_4ddf40(&var_40)
    data_27e8020 = 0
    sub_4db310()
    sub_4015b0()
    data_307cb1c
    sub_4cad60(*(data_27e7fd0 + 0x10), fconvert.s(fconvert.t(1018f)), fconvert.s(fconvert.t(745f)), 
        0xffffffff)
    sub_4db400()
    return sub_407970(&data_27e7a28)
}
