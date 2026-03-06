// 函数名称: GetFileVersionInfoSizeA
// 虚拟地址: 0x6454ca
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallGetFileVersionInfoSizeA(PSTR lptstrFilename, uint32_t* lpdwHandle)
{
    // 第一条实际指令: return GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle) __tailcall
    return GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle) __tailcall
}
