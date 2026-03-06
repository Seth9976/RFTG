// 函数名称: sub_4f53f0
// 虚拟地址: 0x4f53f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f53f0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_4 = arg3
    int32_t* var_4 = arg3
    
    if (arg3 == 0)
        return 0
    
    void* edi_2 = arg1 * 0x118 + *sub_4f4890(arg3)
    int32_t eax_2 = *(edi_2 + 4)
    
    if (eax_2 == 5 || eax_2 == 1)
        return *(edi_2 + 0x68)
    
    sub_4c5870("el.type == UI_BUTTON || el.type == UI_IMAGE", &data_83f3d3, "UIDef.cpp", 0x1f3, 
        "UIElementImageTexture")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
