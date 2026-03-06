// 函数名称: sub_5d1140
// 虚拟地址: 0x5d1140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

CRITICAL_SECTION*sub_5d1140()
{
    // 第一条实际指令: int32_t var_8 = 0x18
    int32_t var_8 = 0x18
    CRITICAL_SECTION* lpCriticalSection = sub_5d0ac0()
    
    if (lpCriticalSection == 0)
        sub_5cd050(0)
        return lpCriticalSection
    
    InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x7d0)
    return lpCriticalSection
}
