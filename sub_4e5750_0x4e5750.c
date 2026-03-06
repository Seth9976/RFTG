// 函数名称: sub_4e5750
// 虚拟地址: 0x4e5750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4e5750()
{
    // 第一条实际指令: uint32_t result = data_27e7fcc
    uint32_t result = data_27e7fcc
    
    if (result != 0)
        if (((*(result + 0x3c) u>> 6).b & 1) != 0)
            long double x87_r0
            sub_4e5320(x87_r0)
            result = data_27e7fcc
        
        if (result != 0)
            if (((*(result + 0x3c) u>> 7).b & 1) != 0)
                sub_51d8b0()
                result = data_27e7fcc
            
            if (result != 0)
                int32_t eax = *(result + 0x3c)
                
                if (((eax u>> 5).b & 1) == 0 && ((eax u>> 7).b & 1) == 0)
                    result.b = (eax u>> 6).b & 1
                
                if (((eax u>> 5).b & 1) != 0 || ((eax u>> 7).b & 1) != 0 || result.b != 0)
                    return sub_4e50c0()
    
    return result
}
