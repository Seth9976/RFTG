// 函数名称: sub_53cc10
// 虚拟地址: 0x53cc10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53cc10()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT eax_2 = sub_536e40()
    int32_t* eax_3 = sub_536db0()
    
    if (eax_3 != 0)
        uint8_t string[0x54]
        GetDlgItemTextA(data_3078830, 0x94, &string, 0x50)
        uint8_t (* var_68)[0x54] = &string
        int32_t eax_5
        int32_t ecx_1
        void* edx
        eax_5, ecx_1, edx = sub_5a710b()
        int32_t var_68_1 = eax_5
        LRESULT var_6c_1 = eax_2
        int32_t result = sub_536c00(sub_530b60(eax_3, edx, ecx_1, &data_8c35ec))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0xaa2, "EditorSetInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
