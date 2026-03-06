// 函数名称: sub_5d9600
// 虚拟地址: 0x5d9600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d9600(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 
    
    if (arg2 == 0)
        return 
    
    *arg2 = sub_685f40(float.t(arg1[0x35]) / fconvert.t(arg1[0x45]))
    arg2[1] = sub_685f40(float.t(arg1[0x36]) / fconvert.t(arg1[0x46]))
    arg2[2] = sub_685f40(float.t(arg1[0x37]) / fconvert.t(arg1[0x45]))
    arg2[3] = sub_685f40(float.t(arg1[0x38]) / fconvert.t(arg1[0x46]))
}
