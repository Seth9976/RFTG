// 函数名称: sub_64bde0
// 虚拟地址: 0x64bde0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64bde0(float arg1) __pure
{
    // 第一条实际指令: return fconvert.t((fconvert.s(fconvert.t(arg1)) & 0xbf800000) | 0x3f800000)
    return fconvert.t((fconvert.s(fconvert.t(arg1)) & 0xbf800000) | 0x3f800000)
}
