// 函数名称: ImmGetCandidateListW
// 虚拟地址: 0x6454f4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallImmGetCandidateListW(HIMC param0, uint32_t deIndex, CANDIDATELIST* lpCandList, uint32_t dwBufLen)
{
    // 第一条实际指令: return ImmGetCandidateListW(param0, deIndex, lpCandList, dwBufLen) __tailcall
    return ImmGetCandidateListW(param0, deIndex, lpCandList, dwBufLen) __tailcall
}
