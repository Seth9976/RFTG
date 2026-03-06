// 函数名称: sub_536db0
// 虚拟地址: 0x536db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_536db0()
{
    // 第一条实际指令: LRESULT eax_1 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    LRESULT eax_1 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    
    if (eax_1 == 0xffffffff)
        return 0
    
    int32_t* eax_3 = data_3079208
    
    if (eax_3 != 0 && eax_3[1] == 0x19)
        void* eax_4 = sub_466320(eax_3)
        
        if (eax_4 != 0 && eax_1 s>= 0 && eax_1 s< *(eax_4 + 4))
            return eax_1 * 0x134 + *eax_4
    
    sub_4c5870(
        "pParticleDef && currentSelection >= 0 && currentSelection < pParticleDef->mEmitterCount", 
        &data_83f3d3, "Windows\EditorWindow.cpp", 0x1c1, "EditorGetSelectedEmitter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
