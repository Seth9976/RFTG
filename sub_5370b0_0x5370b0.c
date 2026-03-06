// 函数名称: sub_5370b0
// 虚拟地址: 0x5370b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5370b0()
{
    // 第一条实际指令: LRESULT eax = sub_536e40()
    LRESULT eax = sub_536e40()
    int32_t* eax_1 = sub_536db0()
    
    if (eax_1 != 0)
        return sub_5311d0(eax_1, eax)
    
    sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0x221, "EditorGetSelectedAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
