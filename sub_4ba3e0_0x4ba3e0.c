// 函数名称: sub_4ba3e0
// 虚拟地址: 0x4ba3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_4ba3e0(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    char eax = *arg1
    
    if (eax u< 0x80 || (eax & 0xe0) == 0xc0 || (eax & 0xf0) == 0xe0 || (eax & 0xf8) == 0xf0)
        var_8 = arg1
        return sub_4ba310(&var_8)
    
    sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, "c:\ax2010\engine\Xutf8.cpp", 0x209, 
        "Xutf8_peek_next")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
