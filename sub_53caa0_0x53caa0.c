// 函数名称: sub_53caa0
// 虚拟地址: 0x53caa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53caa0()
{
    // 第一条实际指令: LRESULT eax = sub_536e40()
    LRESULT eax = sub_536e40()
    int32_t* eax_1 = sub_536db0()
    
    if (eax_1 != 0)
        LRESULT eax_5
        int32_t ecx
        void* edx
        eax_5, ecx, edx = SendMessageA(GetDlgItem(data_3078830, 0x8c), 0x188, 0, 0)
        int32_t eax_6 = neg.d(eax_5)
        int32_t var_10 = sbb.d(eax_6, eax_6, eax_5 != 0) + 1
        LRESULT var_14_1 = eax
        return sub_536c00(sub_530b60(eax_1, edx, ecx, &data_8c35ec))
    
    sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0xa7b, "EditorSetBool")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
