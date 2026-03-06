// 函数名称: sub_507e10
// 虚拟地址: 0x507e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_507e10()
{
    // 第一条实际指令: void* eax
    void* eax
    eax.b = data_26a4564 == 1
    int32_t edi = data_30785cc
    (*(*data_3078804 + 0x8c))(data_27e8020)
    sub_4ddd00()
    void* result = sub_4e1a70(eax)
    
    if (edi != 4)
        if (data_3078808 == 1)
            glFlush()
        
        result = data_27e7fd0
        
        if (*(result + 0x1c) != 0 && data_307881f == 0)
            result = data_27e7fcc
            
            if (result == 0 || ((*(result + 0x3c) u>> 0xd).b & 1) == 0)
                int32_t eax_3 = data_26a4524
                int32_t edx_3 = *(*data_3078804 + 0x90)
                
                if (data_26a4564 != 1)
                    return edx_3(*((eax_3 << 2) + &data_26a4504), *((eax_3 << 2) + &data_26a450c))
                
                return edx_3(*((eax_3 << 2) + &data_26a4508), *((eax_3 << 2) + &data_26a4510))
    
    return result
}
