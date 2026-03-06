// 函数名称: sub_474460
// 虚拟地址: 0x474460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_474460()
{
    // 第一条实际指令: if (data_27c06d8 == 2)
    if (data_27c06d8 == 2)
        sub_4075c0()
        int32_t var_10 = 0
        int32_t var_c = 1
        int32_t ecx
        int32_t edx
        sub_42dd70(&var_10, edx, ecx, &var_10, 0, 0, var_10)
        sub_407670()
        data_27c05f4 = 2
        sub_40a160("single-player-resume")
        return Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection("
            resume-single-player")
    
    sub_4c5870("setup.status == GAMESTATUS_PLAYING", &data_83f3d3, "..\code\RftgTitleScreen.cpp", 
        0x11e, "SinglePlayerResume")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
