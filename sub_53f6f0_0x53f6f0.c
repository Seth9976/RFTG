// 函数名称: sub_53f6f0
// 虚拟地址: 0x53f6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53f6f0(char* arg1)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t edi = *entry_ebx
    
    if (edi != 0)
        int32_t eax_3
        int32_t edx
        edx:eax_3 = sx.q(edi - 1)
        *entry_ebx = sub_53f5f0(arg1) * 3 + mods.dp.d(edx:eax_3, 3) + 1
        return divs.dp.d(edx:eax_3, 3)
    
    sub_4c5870("textAlignment != TA_NONE", &data_83f3d3, "Windows\EditorWindow.cpp", 0xf3a, 
        "GetHAlignment")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
